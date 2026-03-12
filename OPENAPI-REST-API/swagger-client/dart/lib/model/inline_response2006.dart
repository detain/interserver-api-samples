part of swagger.api;

class InlineResponse2006 {
  /* Whether the user was logged in to an existing account. */
  bool login = null;
/* Whether a new account was created. */
  bool signup = null;
/* Whether the OAuth provider was linked to an existing account. */
  bool linked = null;
/* The account ID associated with the OAuth login. */
  int accountId = null;
/* Error code if additional verification is needed (e.g. `2fa_required`). */
  String errorCode = null;

  InlineResponse2006();

  @override
  String toString() {
    return 'InlineResponse2006[login=$login, signup=$signup, linked=$linked, accountId=$accountId, errorCode=$errorCode, ]';
  }

  InlineResponse2006.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    login = json['login'];
    signup = json['signup'];
    linked = json['linked'];
    accountId = json['account_id'];
    errorCode = json['error_code'];
  }

  Map<String, dynamic> toJson() {
    return {
      'login': login,
      'signup': signup,
      'linked': linked,
      'account_id': accountId,
      'error_code': errorCode
     };
  }

  static List<InlineResponse2006> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse2006>() : json.map((value) => new InlineResponse2006.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2006> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse2006>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse2006.fromJson(value));
    }
    return map;
  }
}
