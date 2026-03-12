from typing import List
"""
controller generated to handled auth operation described at:
https://connexion.readthedocs.io/en/latest/security.html
"""
def check_apiKeyAuth(api_key, required_scopes):
    return {'test_key': 'test_value'}

def check_sessionIdCookieAuth(api_key, required_scopes):
    return {'test_key': 'test_value'}

def check_sessionIdHeaderAuth(api_key, required_scopes):
    return {'test_key': 'test_value'}


