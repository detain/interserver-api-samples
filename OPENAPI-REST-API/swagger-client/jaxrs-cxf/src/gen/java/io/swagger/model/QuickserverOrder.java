package io.swagger.model;

import io.swagger.model.QuickserverOrderDistroSel;
import io.swagger.model.QuickserverOrderServerDetails;
import io.swagger.model.QuickserverOrderTemplates;
import io.swagger.model.QuickserverOrderVersion;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

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
  * Available QuickServer options and OS templates for ordering a new QuickServer.
 **/
@Schema(description="Available QuickServer options and OS templates for ordering a new QuickServer.")
public class QuickserverOrder   {
  
  @Schema(example = "221", description = "Quickserver ID.")
 /**
   * Quickserver ID.  
  **/
  private String qsId = null;
  
  @Schema(description = "")
  private QuickserverOrderServerDetails serverDetails = null;
  
  @Schema(description = "")
  private QuickserverOrderTemplates templates = null;
  
  @Schema(description = "")
  private QuickserverOrderVersion version = null;
  
  @Schema(description = "")
  private QuickserverOrderDistroSel distroSel = null;
 /**
   * Quickserver ID.
   * @return qsId
  **/
  @JsonProperty("qs_id")
  @NotNull
  public String getQsId() {
    return qsId;
  }

  public void setQsId(String qsId) {
    this.qsId = qsId;
  }

  public QuickserverOrder qsId(String qsId) {
    this.qsId = qsId;
    return this;
  }

 /**
   * Get serverDetails
   * @return serverDetails
  **/
  @JsonProperty("server_details")
  @NotNull
  public QuickserverOrderServerDetails getServerDetails() {
    return serverDetails;
  }

  public void setServerDetails(QuickserverOrderServerDetails serverDetails) {
    this.serverDetails = serverDetails;
  }

  public QuickserverOrder serverDetails(QuickserverOrderServerDetails serverDetails) {
    this.serverDetails = serverDetails;
    return this;
  }

 /**
   * Get templates
   * @return templates
  **/
  @JsonProperty("templates")
  @NotNull
  public QuickserverOrderTemplates getTemplates() {
    return templates;
  }

  public void setTemplates(QuickserverOrderTemplates templates) {
    this.templates = templates;
  }

  public QuickserverOrder templates(QuickserverOrderTemplates templates) {
    this.templates = templates;
    return this;
  }

 /**
   * Get version
   * @return version
  **/
  @JsonProperty("version")
  @NotNull
  public QuickserverOrderVersion getVersion() {
    return version;
  }

  public void setVersion(QuickserverOrderVersion version) {
    this.version = version;
  }

  public QuickserverOrder version(QuickserverOrderVersion version) {
    this.version = version;
    return this;
  }

 /**
   * Get distroSel
   * @return distroSel
  **/
  @JsonProperty("distro_sel")
  @NotNull
  public QuickserverOrderDistroSel getDistroSel() {
    return distroSel;
  }

  public void setDistroSel(QuickserverOrderDistroSel distroSel) {
    this.distroSel = distroSel;
  }

  public QuickserverOrder distroSel(QuickserverOrderDistroSel distroSel) {
    this.distroSel = distroSel;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverOrder {\n");
    
    sb.append("    qsId: ").append(toIndentedString(qsId)).append("\n");
    sb.append("    serverDetails: ").append(toIndentedString(serverDetails)).append("\n");
    sb.append("    templates: ").append(toIndentedString(templates)).append("\n");
    sb.append("    version: ").append(toIndentedString(version)).append("\n");
    sb.append("    distroSel: ").append(toIndentedString(distroSel)).append("\n");
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
