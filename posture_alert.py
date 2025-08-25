import requests
import time

# ThingSpeak configuration
CHANNEL_ID = 'CHANNEL_ID'           # Your ThingSpeak channel ID
READ_API_KEY = 'YOUR_API_KEY'  # Your ThingSpeak read API key
FIELD = 'field1'                  # Update if using another field

# Telegram Bot credentials
BOT_TOKEN = 'YOUR_TELGRAM_BOT'
CHAT_ID = 'YOUR_CHAT_ID'

def get_latest_value():
    """Fetch the latest value from ThingSpeak."""
    url = f'https://api.thingspeak.com/channels/{CHANNEL_ID}/fields/1/last.json?api_key={READ_API_KEY}'
    response = requests.get(url)
    if response.status_code == 200:
        data = response.json()
        return data.get(FIELD)  # field1, field2, etc.
    else:
        print("Error fetching ThingSpeak data")
        return None

def send_telegram_alert(message):
    """Send a message to the Telegram bot."""
    url = f"https://api.telegram.org/bot{BOT_TOKEN}/sendMessage"
    payload = {
        'chat_id': CHAT_ID,
        'text': message
    }
    requests.post(url, data=payload)

def monitor_posture():
    """Monitor posture and send alert if critical value is detected."""
    value = get_latest_value()
    if value == '3':  # Check if the value is '3' (string comparison)
        send_telegram_alert("⚠️ Critical posture detected! Please sit properly.")

# Run it once
monitor_posture()

# Continuous monitoring every minute
while True:
    monitor_posture()
    time.sleep(60)  # Check every 60 seconds
