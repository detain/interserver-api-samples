part of swagger.api;

class OneOfAssetServerMemoryItems {
  
  OneOfAssetServerMemoryItems();

  @override
  String toString() {
    return 'OneOfAssetServerMemoryItems[]';
  }

  OneOfAssetServerMemoryItems.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
  }

  Map<String, dynamic> toJson() {
    return {
     };
  }

  static List<OneOfAssetServerMemoryItems> listFromJson(List<dynamic> json) {
    return json == null ? new List<OneOfAssetServerMemoryItems>() : json.map((value) => new OneOfAssetServerMemoryItems.fromJson(value)).toList();
  }

  static Map<String, OneOfAssetServerMemoryItems> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, OneOfAssetServerMemoryItems>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new OneOfAssetServerMemoryItems.fromJson(value));
    }
    return map;
  }
}
