part of swagger.api;

class InlineResponse20020 {
  
  bool success = null;

  String text = null;

  InlineResponse20020();

  @override
  String toString() {
    return 'InlineResponse20020[success=$success, text=$text, ]';
  }

  InlineResponse20020.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    success = json['success'];
    text = json['text'];
  }

  Map<String, dynamic> toJson() {
    return {
      'success': success,
      'text': text
     };
  }

  static List<InlineResponse20020> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20020>() : json.map((value) => new InlineResponse20020.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20020> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20020>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20020.fromJson(value));
    }
    return map;
  }
}
