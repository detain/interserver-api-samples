package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A VPS OS Template.
 */
@ApiModel(description="A VPS OS Template.")

public class VpsTemplateRow  {
  
  @ApiModelProperty(value = "")

  private String templateId;

  @ApiModelProperty(value = "")

  private String templateType;

  @ApiModelProperty(value = "")

  private String templateOs;

  @ApiModelProperty(value = "")

  private String templateVersion;

  @ApiModelProperty(value = "")

  private String templateBits;

  @ApiModelProperty(value = "")

  private String templateFile;

  @ApiModelProperty(value = "")

  private String templateAvailable;

  @ApiModelProperty(value = "")

  private String templateName;

  @ApiModelProperty(value = "")

  private String templateDir;
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsTemplateRow vpsTemplateRow = (VpsTemplateRow) o;
    return Objects.equals(this.templateId, vpsTemplateRow.templateId) &&
        Objects.equals(this.templateType, vpsTemplateRow.templateType) &&
        Objects.equals(this.templateOs, vpsTemplateRow.templateOs) &&
        Objects.equals(this.templateVersion, vpsTemplateRow.templateVersion) &&
        Objects.equals(this.templateBits, vpsTemplateRow.templateBits) &&
        Objects.equals(this.templateFile, vpsTemplateRow.templateFile) &&
        Objects.equals(this.templateAvailable, vpsTemplateRow.templateAvailable) &&
        Objects.equals(this.templateName, vpsTemplateRow.templateName) &&
        Objects.equals(this.templateDir, vpsTemplateRow.templateDir);
  }

  @Override
  public int hashCode() {
    return Objects.hash(templateId, templateType, templateOs, templateVersion, templateBits, templateFile, templateAvailable, templateName, templateDir);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

