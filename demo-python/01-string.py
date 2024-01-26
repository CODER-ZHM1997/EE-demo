# hello
print('hello')

# encode

# decode
# 字符串编码成GBK
text = "你好"
encoded_text = text.encode('gbk')

# GBK解码为Unicode
decoded_text = encoded_text.decode('gbk')

print("原始字符串:", text)
print("编码后:", encoded_text)
print("解码后:", decoded_text)