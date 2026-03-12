package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * A VPS OS Template.
 **/
@Schema(description="A VPS OS Template.")
public class VpsTemplateRow   {
  
  @Schema(description = "")
  private String templateId = null;
  
  @Schema(description = "")
  private String templateType = null;
  
  @Schema(description = "")
  private String templateOs = null;
  
  @Schema(description = "")
  private String templateVersion = null;
  
  @Schema(description = "")
  private String templateBits = null;
  
  @Schema(description = "")
  private String templateFile = null;
  
  @Schema(description = "")
  private String templateAvailable = null;
  
  @Schema(description = "")
  private String templateName = null;
  
  @Schema(description = "")
  private String templateDir = null;
 /**
   * Get templateId
   * @return templateId
  **/
  @JsonProperty("template_id")
  public String getTemplateId() {
    return templateId;
  }

  public void setTemplateId(String templateId) {
    this.templateId = templateId;
  }

  public VpsTemplateRow templateId(String templateId) {
    this.templateId = templateId;
    return this;
  }

 /**
   * Get templateType
   * @return templateType
  **/
  @JsonProperty("template_type")
  public String getTemplateType() {
    return templateType;
  }

  public void setTemplateType(String templateType) {
    this.templateType = templateType;
  }

  public VpsTemplateRow templateType(String templateType) {
    this.templateType = templateType;
    return this;
  }

 /**
   * Get templateOs
   * @return templateOs
  **/
  @JsonProperty("template_os")
  public String getTemplateOs() {
    return templateOs;
  }

  public void setTemplateOs(String templateOs) {
    this.templateOs = templateOs;
  }

  public VpsTemplateRow templateOs(String templateOs) {
    this.templateOs = templateOs;
    return this;
  }

 /**
   * Get templateVersion
   * @return templateVersion
  **/
  @JsonProperty("template_version")
  public String getTemplateVersion() {
    return templateVersion;
  }

  public void setTemplateVersion(String templateVersion) {
    this.templateVersion = templateVersion;
  }

  public VpsTemplateRow templateVersion(String templateVersion) {
    this.templateVersion = templateVersion;
    return this;
  }

 /**
   * Get templateBits
   * @return templateBits
  **/
  @JsonProperty("template_bits")
  public String getTemplateBits() {
    return templateBits;
  }

  public void setTemplateBits(String templateBits) {
    this.templateBits = templateBits;
  }

  public VpsTemplateRow templateBits(String templateBits) {
    this.templateBits = templateBits;
    return this;
  }

 /**
   * Get templateFile
   * @return templateFile
  **/
  @JsonProperty("template_file")
  public String getTemplateFile() {
    return templateFile;
  }

  public void setTemplateFile(String templateFile) {
    this.templateFile = templateFile;
  }

  public VpsTemplateRow templateFile(String templateFile) {
    this.templateFile = templateFile;
    return this;
  }

 /**
   * Get templateAvailable
   * @return templateAvailable
  **/
  @JsonProperty("template_available")
  public String getTemplateAvailable() {
    return templateAvailable;
  }

  public void setTemplateAvailable(String templateAvailable) {
    this.templateAvailable = templateAvailable;
  }

  public VpsTemplateRow templateAvailable(String templateAvailable) {
    this.templateAvailable = templateAvailable;
    return this;
  }

 /**
   * Get templateName
   * @return templateName
  **/
  @JsonProperty("template_name")
  public String getTemplateName() {
    return templateName;
  }

  public void setTemplateName(String templateName) {
    this.templateName = templateName;
  }

  public VpsTemplateRow templateName(String templateName) {
    this.templateName = templateName;
    return this;
  }

 /**
   * Get templateDir
   * @return templateDir
  **/
  @JsonProperty("template_dir")
  public String getTemplateDir() {
    return templateDir;
  }

  public void setTemplateDir(String templateDir) {
    this.templateDir = templateDir;
  }

  public VpsTemplateRow templateDir(String templateDir) {
    this.templateDir = templateDir;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsTemplateRow {\n");
    
    sb.append("    templateId: ").append(toIndentedString(templateId)).append("\n");
    sb.append("    templateType: ").append(toIndentedString(templateType)).append("\n");
    sb.append("    templateOs: ").append(toIndentedString(templateOs)).append("\n");
    sb.append("    templateVersion: ").append(toIndentedString(templateVersion)).append("\n");
    sb.append("    templateBits: ").append(toIndentedString(templateBits)).append("\n");
    sb.append("    templateFile: ").append(toIndentedString(templateFile)).append("\n");
    sb.append("    templateAvailable: ").append(toIndentedString(templateAvailable)).append("\n");
    sb.append("    templateName: ").append(toIndentedString(templateName)).append("\n");
    sb.append("    templateDir: ").append(toIndentedString(templateDir)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
