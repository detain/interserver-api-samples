package org.openapitools.model;

import org.openapitools.model.QuickserverOrderDistroSel;
import org.openapitools.model.QuickserverOrderServerDetails;
import org.openapitools.model.QuickserverOrderTemplates;
import org.openapitools.model.QuickserverOrderVersion;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Available QuickServer options and OS templates for ordering a new QuickServer.
 */
@ApiModel(description="Available QuickServer options and OS templates for ordering a new QuickServer.")

public class QuickserverOrder  {
  
 /**
  * Quickserver ID.
  */
  @ApiModelProperty(example = "221", value = "Quickserver ID.")

  private String qsId;

  @ApiModelProperty(value = "")

  private QuickserverOrderServerDetails serverDetails;

  @ApiModelProperty(value = "")

  private QuickserverOrderTemplates templates;

  @ApiModelProperty(value = "")

  private QuickserverOrderVersion version;

  @ApiModelProperty(value = "")

  private QuickserverOrderDistroSel distroSel;
 /**
   * Quickserver ID.
   * @return qsId
  **/
  @JsonProperty("qs_id")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverOrder quickserverOrder = (QuickserverOrder) o;
    return Objects.equals(this.qsId, quickserverOrder.qsId) &&
        Objects.equals(this.serverDetails, quickserverOrder.serverDetails) &&
        Objects.equals(this.templates, quickserverOrder.templates) &&
        Objects.equals(this.version, quickserverOrder.version) &&
        Objects.equals(this.distroSel, quickserverOrder.distroSel);
  }

  @Override
  public int hashCode() {
    return Objects.hash(qsId, serverDetails, templates, version, distroSel);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

