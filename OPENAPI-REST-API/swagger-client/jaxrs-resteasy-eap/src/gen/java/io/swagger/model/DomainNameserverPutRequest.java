package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Payload for replacing the assigned nameserver list for a domain.")

public class DomainNameserverPutRequest   {
  private List<String> nameserver = new ArrayList<String>();

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("nameserver")
  @NotNull
  public List<String> getNameserver() {
    return nameserver;
  }
  public void setNameserver(List<String> nameserver) {
    this.nameserver = nameserver;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainNameserverPutRequest domainNameserverPutRequest = (DomainNameserverPutRequest) o;
    return Objects.equals(nameserver, domainNameserverPutRequest.nameserver);
  }

  @Override
  public int hashCode() {
    return Objects.hash(nameserver);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainNameserverPutRequest {\n");
    
    sb.append("    nameserver: ").append(toIndentedString(nameserver)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
