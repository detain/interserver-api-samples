part of swagger.api;

class InlineResponse20026 {
  /* Confirmation message. */
  String text = null;
/* The support ticket ID created for tracking the migration. Use this with `/tickets/{id}` to check migration progress. */
  int ticket = null;

  InlineResponse20026();

  @override
  String toString() {
    return 'InlineResponse20026[text=$text, ticket=$ticket, ]';
  }

  InlineResponse20026.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    text = json['text'];
    ticket = json['ticket'];
  }

  Map<String, dynamic> toJson() {
    return {
      'text': text,
      'ticket': ticket
     };
  }

  static List<InlineResponse20026> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20026>() : json.map((value) => new InlineResponse20026.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20026> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20026>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20026.fromJson(value));
    }
    return map;
  }
}
