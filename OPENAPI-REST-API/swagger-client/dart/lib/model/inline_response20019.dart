part of swagger.api;

class InlineResponse20019 {
  
  bool success = null;

  String text = null;

  InlineResponse20019();

  @override
  String toString() {
    return 'InlineResponse20019[success=$success, text=$text, ]';
  }

  InlineResponse20019.fromJson(Map<String, dynamic> json) {
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

  static List<InlineResponse20019> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20019>() : json.map((value) => new InlineResponse20019.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20019> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20019>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20019.fromJson(value));
    }
    return map;
  }
}
