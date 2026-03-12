package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="A VPS OS Template.")

public class VpsTemplateRow   {
  private String templateId = null;  private String templateType = null;  private String templateOs = null;  private String templateVersion = null;  private String templateBits = null;  private String templateFile = null;  private String templateAvailable = null;  private String templateName = null;  private String templateDir = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("template_id")
  @NotNull
  public String getTemplateId() {
    return templateId;
  }
  public void setTemplateId(String templateId) {
    this.templateId = templateId;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("template_type")
  @NotNull
  public String getTemplateType() {
    return templateType;
  }
  public void setTemplateType(String templateType) {
    this.templateType = templateType;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("template_os")
  @NotNull
  public String getTemplateOs() {
    return templateOs;
  }
  public void setTemplateOs(String templateOs) {
    this.templateOs = templateOs;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("template_version")
  @NotNull
  public String getTemplateVersion() {
    return templateVersion;
  }
  public void setTemplateVersion(String templateVersion) {
    this.templateVersion = templateVersion;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("template_bits")
  @NotNull
  public String getTemplateBits() {
    return templateBits;
  }
  public void setTemplateBits(String templateBits) {
    this.templateBits = templateBits;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("template_file")
  @NotNull
  public String getTemplateFile() {
    return templateFile;
  }
  public void setTemplateFile(String templateFile) {
    this.templateFile = templateFile;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("template_available")
  @NotNull
  public String getTemplateAvailable() {
    return templateAvailable;
  }
  public void setTemplateAvailable(String templateAvailable) {
    this.templateAvailable = templateAvailable;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("template_name")
  @NotNull
  public String getTemplateName() {
    return templateName;
  }
  public void setTemplateName(String templateName) {
    this.templateName = templateName;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("template_dir")
  @NotNull
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
