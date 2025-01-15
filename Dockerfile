# Use standard Python Linux image instead of Windows
FROM python:3.9-slim

# Set working directory
WORKDIR /app

# Copy requirements first (for better caching)
COPY requirements.txt .

# Install dependencies and required system packages
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
    tk \
    && rm -rf /var/lib/apt/lists/* \
    && pip install --no-cache-dir -r requirements.txt

# Copy application files
COPY ui.py .
COPY http_server.py .

# Create shared directory
RUN mkdir shared

# Expose port 8000
EXPOSE 8000

# Command to run the application
CMD ["python", "server.py"] 