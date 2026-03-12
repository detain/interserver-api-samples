package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Payload for updating an existing mail alert.
 **/
@Schema(description = "Payload for updating an existing mail alert.")


public class MailAlertUpdateRequest   {
  @JsonProperty("alert_id")
  private Integer alertId = null;
  @JsonProperty("type")
  private String type = null;
  @JsonProperty("value")
  private String value = null;
  @JsonProperty("to")
  private String to = null;
  @JsonProperty("enabled")
  private String enabled = null;
  /**
   * Alert ID to update.
   **/
  public MailAlertUpdateRequest alertId(Integer alertId) {
    this.alertId = alertId;
    return this;
  }

  
  @Schema(description = "Alert ID to update.")
  @JsonProperty("alert_id")
  public Integer getAlertId() {
    return alertId;
  }
  public void setAlertId(Integer alertId) {
    this.alertId = alertId;
  }

  /**
   * Alert type identifier.
   **/
  public MailAlertUpdateRequest type(String type) {
    this.type = type;
    return this;
  }

  
  @Schema(description = "Alert type identifier.")
  @JsonProperty("type")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   * Alert value or threshold.
   **/
  public MailAlertUpdateRequest value(String value) {
    this.value = value;
    return this;
  }

  
  @Schema(description = "Alert value or threshold.")
  @JsonProperty("value")
  public String getValue() {
    return value;
  }
  public void setValue(String value) {
    this.value = value;
  }

  /**
   * Email address to notify.
   **/
  public MailAlertUpdateRequest to(String to) {
    this.to = to;
    return this;
  }

  
  @Schema(description = "Email address to notify.")
  @JsonProperty("to")
  public String getTo() {
    return to;
  }
  public void setTo(String to) {
    this.to = to;
  }

  /**
   * Whether the alert is enabled.
   **/
  public MailAlertUpdateRequest enabled(String enabled) {
    this.enabled = enabled;
    return this;
  }

  
  @Schema(description = "Whether the alert is enabled.")
  @JsonProperty("enabled")
  public String getEnabled() {
    return enabled;
  }
  public void setEnabled(String enabled) {
    this.enabled = enabled;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailAlertUpdateRequest mailAlertUpdateRequest = (MailAlertUpdateRequest) o;
    return Objects.equals(alertId, mailAlertUpdateRequest.alertId) &&
        Objects.equals(type, mailAlertUpdateRequest.type) &&
        Objects.equals(value, mailAlertUpdateRequest.value) &&
        Objects.equals(to, mailAlertUpdateRequest.to) &&
        Objects.equals(enabled, mailAlertUpdateRequest.enabled);
  }

  @Override
  public int hashCode() {
    return Objects.hash(alertId, type, value, to, enabled);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailAlertUpdateRequest {\n");
    sb.append("    alertId: ").append(toIndentedString(alertId)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    value: ").append(toIndentedString(value)).append("\n");
    sb.append("    to: ").append(toIndentedString(to)).append("\n");
    sb.append("    enabled: ").append(toIndentedString(enabled)).append("\n");
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
