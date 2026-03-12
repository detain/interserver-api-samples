package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Payload for creating a mail alert.
 */




public class MailAlertRequest   {
  private String type = null;

  private String value = null;

  private String to = null;

  private String enabled = null;

  public MailAlertRequest type(String type) {
    this.type = type;
    return this;
  }

  /**
   * Alert type identifier.
   * @return type
   **/
    public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public MailAlertRequest value(String value) {
    this.value = value;
    return this;
  }

  /**
   * Alert value or threshold.
   * @return value
   **/
    public String getValue() {
    return value;
  }

  public void setValue(String value) {
    this.value = value;
  }

  public MailAlertRequest to(String to) {
    this.to = to;
    return this;
  }

  /**
   * Email address to notify.
   * @return to
   **/
    public String getTo() {
    return to;
  }

  public void setTo(String to) {
    this.to = to;
  }

  public MailAlertRequest enabled(String enabled) {
    this.enabled = enabled;
    return this;
  }

  /**
   * Whether the alert is enabled.
   * @return enabled
   **/
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
    MailAlertRequest mailAlertRequest = (MailAlertRequest) o;
    return Objects.equals(this.type, mailAlertRequest.type) &&
        Objects.equals(this.value, mailAlertRequest.value) &&
        Objects.equals(this.to, mailAlertRequest.to) &&
        Objects.equals(this.enabled, mailAlertRequest.enabled);
  }

  @Override
  public int hashCode() {
    return Objects.hash(type, value, to, enabled);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailAlertRequest {\n");
    
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
