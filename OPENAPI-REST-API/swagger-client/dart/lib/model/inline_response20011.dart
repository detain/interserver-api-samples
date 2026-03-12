part of swagger.api;

class InlineResponse20011 {
  
  String text = null;
/* A pre-signed download URL valid for 24 hours. */
  String url = null;

  InlineResponse20011();

  @override
  String toString() {
    return 'InlineResponse20011[text=$text, url=$url, ]';
  }

  InlineResponse20011.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    text = json['text'];
    url = json['url'];
  }

  Map<String, dynamic> toJson() {
    return {
      'text': text,
      'url': url
     };
  }

  static List<InlineResponse20011> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20011>() : json.map((value) => new InlineResponse20011.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20011> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20011>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20011.fromJson(value));
    }
    return map;
  }
}
