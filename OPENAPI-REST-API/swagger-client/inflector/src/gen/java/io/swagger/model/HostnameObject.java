package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Request specifying the hostname.
 **/
@Schema(description = "Request specifying the hostname.")


public class HostnameObject   {
  @JsonProperty("hostname")
  private String hostname = null;
  /**
   **/
  public HostnameObject hostname(String hostname) {
    this.hostname = hostname;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("hostname")
  public String getHostname() {
    return hostname;
  }
  public void setHostname(String hostname) {
    this.hostname = hostname;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HostnameObject hostnameObject = (HostnameObject) o;
    return Objects.equals(hostname, hostnameObject.hostname);
  }

  @Override
  public int hashCode() {
    return Objects.hash(hostname);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HostnameObject {\n");
    sb.append("    hostname: ").append(toIndentedString(hostname)).append("\n");
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
