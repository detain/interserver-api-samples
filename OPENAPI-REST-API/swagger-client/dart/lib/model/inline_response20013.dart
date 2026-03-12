part of swagger.api;

class InlineResponse20013 {
  
  bool success = null;

  String text = null;

  InlineResponse20013();

  @override
  String toString() {
    return 'InlineResponse20013[success=$success, text=$text, ]';
  }

  InlineResponse20013.fromJson(Map<String, dynamic> json) {
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

  static List<InlineResponse20013> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20013>() : json.map((value) => new InlineResponse20013.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20013> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20013>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20013.fromJson(value));
    }
    return map;
  }
}
