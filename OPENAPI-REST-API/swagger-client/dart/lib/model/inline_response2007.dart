part of swagger.api;

class InlineResponse2007 {
  /* Whether the 2FA verification succeeded and the user is now logged in. */
  bool login = null;

  InlineResponse2007();

  @override
  String toString() {
    return 'InlineResponse2007[login=$login, ]';
  }

  InlineResponse2007.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    login = json['login'];
  }

  Map<String, dynamic> toJson() {
    return {
      'login': login
     };
  }

  static List<InlineResponse2007> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse2007>() : json.map((value) => new InlineResponse2007.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2007> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse2007>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse2007.fromJson(value));
    }
    return map;
  }
}
