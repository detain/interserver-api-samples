using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class WebsitesOrderPackagesInfo {
    /// <summary>
    /// The ID of the package.
    /// </summary>
    /// <value>The ID of the package.</value>
    [DataMember(Name="services_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_id")]
    public string ServicesId { get; set; }

    /// <summary>
    /// The name of the package.
    /// </summary>
    /// <value>The name of the package.</value>
    [DataMember(Name="services_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_name")]
    public string ServicesName { get; set; }

    /// <summary>
    /// The cost of the package.
    /// </summary>
    /// <value>The cost of the package.</value>
    [DataMember(Name="services_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_cost")]
    public string ServicesCost { get; set; }

    /// <summary>
    /// The category of the package.
    /// </summary>
    /// <value>The category of the package.</value>
    [DataMember(Name="services_category", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_category")]
    public string ServicesCategory { get; set; }

    /// <summary>
    /// Indicates if the package is buyable (1 for yes, 0 for no).
    /// </summary>
    /// <value>Indicates if the package is buyable (1 for yes, 0 for no).</value>
    [DataMember(Name="services_buyable", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_buyable")]
    public string ServicesBuyable { get; set; }

    /// <summary>
    /// The type of the package.
    /// </summary>
    /// <value>The type of the package.</value>
    [DataMember(Name="services_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_type")]
    public string ServicesType { get; set; }

    /// <summary>
    /// Additional field 1 for the package.
    /// </summary>
    /// <value>Additional field 1 for the package.</value>
    [DataMember(Name="services_field1", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_field1")]
    public string ServicesField1 { get; set; }

    /// <summary>
    /// Additional field 2 for the package.
    /// </summary>
    /// <value>Additional field 2 for the package.</value>
    [DataMember(Name="services_field2", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_field2")]
    public string ServicesField2 { get; set; }

    /// <summary>
    /// The module of the package.
    /// </summary>
    /// <value>The module of the package.</value>
    [DataMember(Name="services_module", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_module")]
    public string ServicesModule { get; set; }

    /// <summary>
    /// HTML content for the package.
    /// </summary>
    /// <value>HTML content for the package.</value>
    [DataMember(Name="services_html", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_html")]
    public string ServicesHtml { get; set; }

    /// <summary>
    /// Description of the package.
    /// </summary>
    /// <value>Description of the package.</value>
    [DataMember(Name="services_description", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_description")]
    public string ServicesDescription { get; set; }

    /// <summary>
    /// URL for more information about the package.
    /// </summary>
    /// <value>URL for more information about the package.</value>
    [DataMember(Name="services_moreinfo_url", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_moreinfo_url")]
    public string ServicesMoreinfoUrl { get; set; }

    /// <summary>
    /// Indicates if the package is hidden (1 for yes, 0 for no).
    /// </summary>
    /// <value>Indicates if the package is hidden (1 for yes, 0 for no).</value>
    [DataMember(Name="services_hidden", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_hidden")]
    public string ServicesHidden { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class WebsitesOrderPackagesInfo {\n");
      sb.Append("  ServicesId: ").Append(ServicesId).Append("\n");
      sb.Append("  ServicesName: ").Append(ServicesName).Append("\n");
      sb.Append("  ServicesCost: ").Append(ServicesCost).Append("\n");
      sb.Append("  ServicesCategory: ").Append(ServicesCategory).Append("\n");
      sb.Append("  ServicesBuyable: ").Append(ServicesBuyable).Append("\n");
      sb.Append("  ServicesType: ").Append(ServicesType).Append("\n");
      sb.Append("  ServicesField1: ").Append(ServicesField1).Append("\n");
      sb.Append("  ServicesField2: ").Append(ServicesField2).Append("\n");
      sb.Append("  ServicesModule: ").Append(ServicesModule).Append("\n");
      sb.Append("  ServicesHtml: ").Append(ServicesHtml).Append("\n");
      sb.Append("  ServicesDescription: ").Append(ServicesDescription).Append("\n");
      sb.Append("  ServicesMoreinfoUrl: ").Append(ServicesMoreinfoUrl).Append("\n");
      sb.Append("  ServicesHidden: ").Append(ServicesHidden).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}
