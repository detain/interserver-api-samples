part of swagger.api;

class InlineResponse20012ClientLinks {
  
  String label = null;

  String link = null;

  String icon = null;

  String iconText = null;

  String helpText = null;

  String otherAttr = null;

  InlineResponse20012ClientLinks();

  @override
  String toString() {
    return 'InlineResponse20012ClientLinks[label=$label, link=$link, icon=$icon, iconText=$iconText, helpText=$helpText, otherAttr=$otherAttr, ]';
  }

  InlineResponse20012ClientLinks.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    label = json['label'];
    link = json['link'];
    icon = json['icon'];
    iconText = json['icon_text'];
    helpText = json['help_text'];
    otherAttr = json['other_attr'];
  }

  Map<String, dynamic> toJson() {
    return {
      'label': label,
      'link': link,
      'icon': icon,
      'icon_text': iconText,
      'help_text': helpText,
      'other_attr': otherAttr
     };
  }

  static List<InlineResponse20012ClientLinks> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20012ClientLinks>() : json.map((value) => new InlineResponse20012ClientLinks.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20012ClientLinks> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20012ClientLinks>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20012ClientLinks.fromJson(value));
    }
    return map;
  }
}
