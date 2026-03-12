part of swagger.api;

class DomainOrderTldServices {
  /* Service ID for .asia TLD */
  int asia = null;
/* Service ID for .be TLD */
  int be = null;
/* Service ID for .biz TLD */
  int biz = null;
/* Service ID for .ca TLD */
  int ca = null;

  DomainOrderTldServices();

  @override
  String toString() {
    return 'DomainOrderTldServices[asia=$asia, be=$be, biz=$biz, ca=$ca, ]';
  }

  DomainOrderTldServices.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    asia = json['.asia'];
    be = json['.be'];
    biz = json['.biz'];
    ca = json['.ca'];
  }

  Map<String, dynamic> toJson() {
    return {
      '.asia': asia,
      '.be': be,
      '.biz': biz,
      '.ca': ca
     };
  }

  static List<DomainOrderTldServices> listFromJson(List<dynamic> json) {
    return json == null ? new List<DomainOrderTldServices>() : json.map((value) => new DomainOrderTldServices.fromJson(value)).toList();
  }

  static Map<String, DomainOrderTldServices> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, DomainOrderTldServices>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new DomainOrderTldServices.fromJson(value));
    }
    return map;
  }
}
