using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A result row from the &#x60;Webhosting&#x60; &#x60;GET&#x60; request.
  /// </summary>
  [DataContract]
  public class WebsiteRow {
    /// <summary>
    /// The id of the website.
    /// </summary>
    /// <value>The id of the website.</value>
    [DataMember(Name="website_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_id")]
    public string WebsiteId { get; set; }

    /// <summary>
    /// The hostname of the website.
    /// </summary>
    /// <value>The hostname of the website.</value>
    [DataMember(Name="website_hostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_hostname")]
    public string WebsiteHostname { get; set; }

    /// <summary>
    /// The repeat invoices cost of the website.
    /// </summary>
    /// <value>The repeat invoices cost of the website.</value>
    [DataMember(Name="repeat_invoices_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "repeat_invoices_cost")]
    public string RepeatInvoicesCost { get; set; }

    /// <summary>
    /// The status of the website.
    /// </summary>
    /// <value>The status of the website.</value>
    [DataMember(Name="website_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_status")]
    public string WebsiteStatus { get; set; }

    /// <summary>
    /// The services name of the website.
    /// </summary>
    /// <value>The services name of the website.</value>
    [DataMember(Name="services_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_name")]
    public string ServicesName { get; set; }

    /// <summary>
    /// The comment of the website.
    /// </summary>
    /// <value>The comment of the website.</value>
    [DataMember(Name="website_comment", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website_comment")]
    public string WebsiteComment { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class WebsiteRow {\n");
      sb.Append("  WebsiteId: ").Append(WebsiteId).Append("\n");
      sb.Append("  WebsiteHostname: ").Append(WebsiteHostname).Append("\n");
      sb.Append("  RepeatInvoicesCost: ").Append(RepeatInvoicesCost).Append("\n");
      sb.Append("  WebsiteStatus: ").Append(WebsiteStatus).Append("\n");
      sb.Append("  ServicesName: ").Append(ServicesName).Append("\n");
      sb.Append("  WebsiteComment: ").Append(WebsiteComment).Append("\n");
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
