#!/usr/bin/python3
"""
Main file for testing
"""

validUTF8 = __import__('0-validate_utf8').validUTF8

data = [65]
print(validUTF8(data))

data = [80, 121, 116, 104, 111, 110, 32, 105, 115, 32, 99, 111, 111, 108, 33]
print(validUTF8(data))

data = [229, 65, 127, 256]
print(validUTF8(data))


data = data = [236, 157, 180, 32, 236, 151, 176, 236, 130, 176, 235, 147, 164, 236, 157, 128, 32, 236, 160, 149, 236, 136, 152, 235, 147, 164, 236, 157, 132, 32, 236, 157, 184, 236, 158, 144, 235, 161, 156, 32, 235, 176, 155, 236, 149, 132, 235, 147, 164, 236, 158, 133, 235, 139, 136, 235, 139, 164, 46, 32, 236, 178, 171, 32, 235, 178, 136, 236, 167, 184, 32, 236, 157, 184, 236, 158, 144, 235, 165, 188, 32, 235, 145, 144, 32, 235, 178, 136, 236, 167, 184, 32, 236, 157, 184, 236, 158, 144, 235, 161, 156, 32, 236, 163, 188, 236, 150, 180, 236, 167, 132, 32, 235, 185, 132, 237, 138, 184, 32, 236, 136, 152, 235, 167, 140, 237, 129, 188, 32, 236, 153, 188, 236, 170, 189, 236, 157, 180, 235, 130, 152, 32, 236, 152, 164, 235, 165, 184, 236, 170, 189, 236, 156, 188, 235, 161, 156, 32, 235, 176, 137, 235, 139, 136, 235, 139, 164, 40, 115, 104, 105, 102, 116, 41, 46, 10, 10, 236, 152, 164, 235, 165, 184, 236, 170, 189, 236, 156, 188, 235, 161, 156, 32, 110, 32, 235, 185, 132, 237, 138, 184, 32, 236, 139, 156, 237, 148, 132, 237, 138, 184, 32, 237, 149, 152, 235, 138, 148, 32, 234, 178, 131, 236, 157, 128, 32, 112, 111, 119, 40, 50, 44, 110, 41, 32, 235, 161, 156, 32, 236, 160, 149, 236, 136, 152, 32, 235, 130, 152, 235, 136, 151, 236, 133, 136, 237, 149, 152, 235, 138, 148, 32, 234, 178, 131, 236, 156, 188, 235, 161, 156, 32, 236, 160, 149, 236, 157, 152, 235, 144, 169, 235, 139, 136, 235, 139, 164, 46, 32, 236, 153, 188, 236, 170, 189, 236, 156, 188, 235, 161, 156, 32, 110, 32, 235, 185, 132, 237, 138, 184, 32, 236, 139, 156, 237, 148, 132, 237, 138, 184, 32, 237, 149, 152, 235, 138, 148, 32, 234, 178, 131, 236, 157, 128, 32, 112, 111, 119, 40, 50, 44, 110, 41, 32, 235, 165, 188, 32, 234, 179, 177, 237, 149, 152, 235, 138, 148, 32, 234, 178, 131, 236, 156, 188, 235, 161, 156, 32, 236, 160, 149, 236, 157, 152, 235, 144, 169, 235, 139, 136, 235, 139, 164, 46]
print(validUTF8(data))

data = [467, 133, 108]
print(validUTF8(data))


