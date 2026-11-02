from transformers import pipeline

classifier = pipeline(
    "sentiment-analysis"
)

result = classifier(
    "I really love this product"
)

print(result)