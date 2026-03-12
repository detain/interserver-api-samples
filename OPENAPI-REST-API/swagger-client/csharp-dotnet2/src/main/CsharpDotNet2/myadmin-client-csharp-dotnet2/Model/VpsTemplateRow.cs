using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A VPS OS Template.
  /// </summary>
  [DataContract]
  public class VpsTemplateRow {
    /// <summary>
    /// Gets or Sets TemplateId
    /// </summary>
    [DataMember(Name="template_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "template_id")]
    public string TemplateId { get; set; }

    /// <summary>
    /// Gets or Sets TemplateType
    /// </summary>
    [DataMember(Name="template_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "template_type")]
    public string TemplateType { get; set; }

    /// <summary>
    /// Gets or Sets TemplateOs
    /// </summary>
    [DataMember(Name="template_os", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "template_os")]
    public string TemplateOs { get; set; }

    /// <summary>
    /// Gets or Sets TemplateVersion
    /// </summary>
    [DataMember(Name="template_version", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "template_version")]
    public string TemplateVersion { get; set; }

    /// <summary>
    /// Gets or Sets TemplateBits
    /// </summary>
    [DataMember(Name="template_bits", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "template_bits")]
    public string TemplateBits { get; set; }

    /// <summary>
    /// Gets or Sets TemplateFile
    /// </summary>
    [DataMember(Name="template_file", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "template_file")]
    public string TemplateFile { get; set; }

    /// <summary>
    /// Gets or Sets TemplateAvailable
    /// </summary>
    [DataMember(Name="template_available", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "template_available")]
    public string TemplateAvailable { get; set; }

    /// <summary>
    /// Gets or Sets TemplateName
    /// </summary>
    [DataMember(Name="template_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "template_name")]
    public string TemplateName { get; set; }

    /// <summary>
    /// Gets or Sets TemplateDir
    /// </summary>
    [DataMember(Name="template_dir", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "template_dir")]
    public string TemplateDir { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsTemplateRow {\n");
      sb.Append("  TemplateId: ").Append(TemplateId).Append("\n");
      sb.Append("  TemplateType: ").Append(TemplateType).Append("\n");
      sb.Append("  TemplateOs: ").Append(TemplateOs).Append("\n");
      sb.Append("  TemplateVersion: ").Append(TemplateVersion).Append("\n");
      sb.Append("  TemplateBits: ").Append(TemplateBits).Append("\n");
      sb.Append("  TemplateFile: ").Append(TemplateFile).Append("\n");
      sb.Append("  TemplateAvailable: ").Append(TemplateAvailable).Append("\n");
      sb.Append("  TemplateName: ").Append(TemplateName).Append("\n");
      sb.Append("  TemplateDir: ").Append(TemplateDir).Append("\n");
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
