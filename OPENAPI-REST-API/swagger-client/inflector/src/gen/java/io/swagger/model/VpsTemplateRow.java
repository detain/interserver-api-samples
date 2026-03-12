package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * A VPS OS Template.
 **/
@Schema(description = "A VPS OS Template.")


public class VpsTemplateRow   {
  @JsonProperty("template_id")
  private String templateId = null;
  @JsonProperty("template_type")
  private String templateType = null;
  @JsonProperty("template_os")
  private String templateOs = null;
  @JsonProperty("template_version")
  private String templateVersion = null;
  @JsonProperty("template_bits")
  private String templateBits = null;
  @JsonProperty("template_file")
  private String templateFile = null;
  @JsonProperty("template_available")
  private String templateAvailable = null;
  @JsonProperty("template_name")
  private String templateName = null;
  @JsonProperty("template_dir")
  private String templateDir = null;
  /**
   **/
  public VpsTemplateRow templateId(String templateId) {
    this.templateId = templateId;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("template_id")
  public String getTemplateId() {
    return templateId;
  }
  public void setTemplateId(String templateId) {
    this.templateId = templateId;
  }

  /**
   **/
  public VpsTemplateRow templateType(String templateType) {
    this.templateType = templateType;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("template_type")
  public String getTemplateType() {
    return templateType;
  }
  public void setTemplateType(String templateType) {
    this.templateType = templateType;
  }

  /**
   **/
  public VpsTemplateRow templateOs(String templateOs) {
    this.templateOs = templateOs;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("template_os")
  public String getTemplateOs() {
    return templateOs;
  }
  public void setTemplateOs(String templateOs) {
    this.templateOs = templateOs;
  }

  /**
   **/
  public VpsTemplateRow templateVersion(String templateVersion) {
    this.templateVersion = templateVersion;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("template_version")
  public String getTemplateVersion() {
    return templateVersion;
  }
  public void setTemplateVersion(String templateVersion) {
    this.templateVersion = templateVersion;
  }

  /**
   **/
  public VpsTemplateRow templateBits(String templateBits) {
    this.templateBits = templateBits;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("template_bits")
  public String getTemplateBits() {
    return templateBits;
  }
  public void setTemplateBits(String templateBits) {
    this.templateBits = templateBits;
  }

  /**
   **/
  public VpsTemplateRow templateFile(String templateFile) {
    this.templateFile = templateFile;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("template_file")
  public String getTemplateFile() {
    return templateFile;
  }
  public void setTemplateFile(String templateFile) {
    this.templateFile = templateFile;
  }

  /**
   **/
  public VpsTemplateRow templateAvailable(String templateAvailable) {
    this.templateAvailable = templateAvailable;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("template_available")
  public String getTemplateAvailable() {
    return templateAvailable;
  }
  public void setTemplateAvailable(String templateAvailable) {
    this.templateAvailable = templateAvailable;
  }

  /**
   **/
  public VpsTemplateRow templateName(String templateName) {
    this.templateName = templateName;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("template_name")
  public String getTemplateName() {
    return templateName;
  }
  public void setTemplateName(String templateName) {
    this.templateName = templateName;
  }

  /**
   **/
  public VpsTemplateRow templateDir(String templateDir) {
    this.templateDir = templateDir;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("template_dir")
  public String getTemplateDir() {
    return templateDir;
  }
  public void setTemplateDir(String templateDir) {
    this.templateDir = templateDir;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsTemplateRow vpsTemplateRow = (VpsTemplateRow) o;
    return Objects.equals(templateId, vpsTemplateRow.templateId) &&
        Objects.equals(templateType, vpsTemplateRow.templateType) &&
        Objects.equals(templateOs, vpsTemplateRow.templateOs) &&
        Objects.equals(templateVersion, vpsTemplateRow.templateVersion) &&
        Objects.equals(templateBits, vpsTemplateRow.templateBits) &&
        Objects.equals(templateFile, vpsTemplateRow.templateFile) &&
        Objects.equals(templateAvailable, vpsTemplateRow.templateAvailable) &&
        Objects.equals(templateName, vpsTemplateRow.templateName) &&
        Objects.equals(templateDir, vpsTemplateRow.templateDir);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
