# FarShare

**Note: This application is currently compatible with macOS only.**

## Overview
FarShare is a simple yet powerful file-sharing application that allows users to quickly share files and folders over the internet using secure NGROK tunnels. It generates both a shareable link and QR code for easy access.

## Download
Download the latest version of FarShare:
[Download FileSharing.dmg](https://github.com/NISHANTTMAURYA/FarShare/blob/main/FileSharing.dmg)

## Features
- 🗂️ Share individual files or entire folders
- 🔗 Generate secure, temporary sharing links
- 📱 QR code generation for easy mobile access
- 🖥️ Clean, modern user interface
- 📦 Download files individually or as a ZIP
- 🔒 Secure file transfer through NGROK tunnels

## Installation
1. Download `FileSharing.dmg`
2. Double-click the DMG file to open it
3. Drag FileSharing.app to your Applications folder
4. First time opening:
   - Right-click (or Control-click) on FileSharing.app
   - Choose "Open" from the menu
   - Click "Open" when prompted

**Note:** If you see a security warning:
1. Go to System Preferences → Security & Privacy → General
2. Click "Open Anyway"

## Usage
1. Launch FileSharing.app
2. Choose "Share a File" or "Share a Folder"
3. Select the content you want to share
4. The app will generate:
   - A shareable link
   - A QR code for easy mobile access
5. Recipients can:
   - Download individual files
   - Download everything as a ZIP
   - Scan the QR code for mobile access

## Technical Details
- Built with Python
- Uses NGROK for secure tunneling
- Features a Tkinter-based GUI
- Includes automatic port management
- Supports concurrent file downloads

## Dependencies
- pyngrok==7.0.5
- qrcode==7.4.2
- Pillow==10.2.0
- python-dotenv==1.0.0

## Security Features
- Blocks path traversal attempts
- Secure file serving
- Temporary URL generation
- Automatic cleanup of temporary files
- Port conflict resolution

## Known Limitations
- Currently supports macOS only
- Requires internet connection
- NGROK connection needed for sharing
- Unsigned application (may trigger security warnings)

## Contributing
Feel free to submit issues and enhancement requests!



## Acknowledgments
- NGROK for secure tunneling
- Python community for excellent libraries
