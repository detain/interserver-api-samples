package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.QuickserverOrderDistroSel;
import io.swagger.model.QuickserverOrderServerDetails;
import io.swagger.model.QuickserverOrderTemplates;
import io.swagger.model.QuickserverOrderVersion;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Available QuickServer options and OS templates for ordering a new QuickServer.
 **/
@Schema(description = "Available QuickServer options and OS templates for ordering a new QuickServer.")


public class QuickserverOrder   {
  @JsonProperty("qs_id")
  private String qsId = null;
  @JsonProperty("server_details")
  private QuickserverOrderServerDetails serverDetails = null;
  @JsonProperty("templates")
  private QuickserverOrderTemplates templates = null;
  @JsonProperty("version")
  private QuickserverOrderVersion version = null;
  @JsonProperty("distro_sel")
  private QuickserverOrderDistroSel distroSel = null;
  /**
   * Quickserver ID.
   **/
  public QuickserverOrder qsId(String qsId) {
    this.qsId = qsId;
    return this;
  }

  
  @Schema(example = "221", description = "Quickserver ID.")
  @JsonProperty("qs_id")
  public String getQsId() {
    return qsId;
  }
  public void setQsId(String qsId) {
    this.qsId = qsId;
  }

  /**
   **/
  public QuickserverOrder serverDetails(QuickserverOrderServerDetails serverDetails) {
    this.serverDetails = serverDetails;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("server_details")
  public QuickserverOrderServerDetails getServerDetails() {
    return serverDetails;
  }
  public void setServerDetails(QuickserverOrderServerDetails serverDetails) {
    this.serverDetails = serverDetails;
  }

  /**
   **/
  public QuickserverOrder templates(QuickserverOrderTemplates templates) {
    this.templates = templates;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("templates")
  public QuickserverOrderTemplates getTemplates() {
    return templates;
  }
  public void setTemplates(QuickserverOrderTemplates templates) {
    this.templates = templates;
  }

  /**
   **/
  public QuickserverOrder version(QuickserverOrderVersion version) {
    this.version = version;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("version")
  public QuickserverOrderVersion getVersion() {
    return version;
  }
  public void setVersion(QuickserverOrderVersion version) {
    this.version = version;
  }

  /**
   **/
  public QuickserverOrder distroSel(QuickserverOrderDistroSel distroSel) {
    this.distroSel = distroSel;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("distro_sel")
  public QuickserverOrderDistroSel getDistroSel() {
    return distroSel;
  }
  public void setDistroSel(QuickserverOrderDistroSel distroSel) {
    this.distroSel = distroSel;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverOrder quickserverOrder = (QuickserverOrder) o;
    return Objects.equals(qsId, quickserverOrder.qsId) &&
        Objects.equals(serverDetails, quickserverOrder.serverDetails) &&
        Objects.equals(templates, quickserverOrder.templates) &&
        Objects.equals(version, quickserverOrder.version) &&
        Objects.equals(distroSel, quickserverOrder.distroSel);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
