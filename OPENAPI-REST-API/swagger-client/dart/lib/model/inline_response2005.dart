part of swagger.api;

class InlineResponse2005 {
  /* The URL to redirect the user to for OAuth authentication. */
  String redirectUrl = null;

  InlineResponse2005();

  @override
  String toString() {
    return 'InlineResponse2005[redirectUrl=$redirectUrl, ]';
  }

  InlineResponse2005.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    redirectUrl = json['redirect_url'];
  }

  Map<String, dynamic> toJson() {
    return {
      'redirect_url': redirectUrl
     };
  }

  static List<InlineResponse2005> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse2005>() : json.map((value) => new InlineResponse2005.fromJson(value)).toList();
  }

  static Map<String, InlineResponse2005> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse2005>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse2005.fromJson(value));
    }
    return map;
  }
}
