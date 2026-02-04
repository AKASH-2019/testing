# LinkedIn Post Generator - Multi-Agent System
### Overview
This system uses multiple specialized AI agents to generate professional LinkedIn posts based on topic classification. The system intelligently routes topics to the most appropriate writer agent (Tech Writer or General Writer) using a routing agent with classification capabilities.

## Agent Roles
🔀 Router Agent
* Classifies topics as "tech" or "general"
* Routes to the appropriate writer
* Uses keyword matching for classification

🤖 Tech Writer Agent
* Handles: AI, ML, software, cloud, cybersecurity, etc.
* Professional technical tone
* Clear explanations for professionals

📝 General Writer Agent
* Handles: career, management, leadership, soft skills, etc.
* Professional reflective tone
* Broad audience appeal

## Workflow Diagram
![Alt text](https://github.com/AKASH-2019/testing/blob/master/deepseek_mermaid_20260204_b7e7cf.png)

## Classification Logic
* Tech Keywords: ai, machine learning, software, cloud, data, programming, blockchain, cybersecurity, devops

* Rules: Topic contains keyword → "tech", else → "general"

## Output Format
{
    "topic": str,
    "language": str,
    "content": str  # 2-4 paragraphs, no emojis
}

## Requirements
* BASE_URL, API_KEY, MODEL_NAME in .env
* OpenAI-compatible API
* Supports multiple languages

## Example Topics
* "AI in Healthcare" → Tech Writer (English)
* "Time Management" → General Writer (Bengali)
