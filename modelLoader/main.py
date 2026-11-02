import torch

# Check CUDA availability
print(torch.cuda.is_available())


# Create tensor on GPU
x = torch.randn(1000, 1000).cuda()

# Perform matrix multiplication
y = torch.matmul(x, x)

print(y.device)