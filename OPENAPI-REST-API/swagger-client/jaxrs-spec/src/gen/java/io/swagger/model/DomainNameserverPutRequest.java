package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Payload for replacing the assigned nameserver list for a domain.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Payload for replacing the assigned nameserver list for a domain.")

public class DomainNameserverPutRequest   {

  private @Valid List<String> nameserver = new ArrayList<String>();

  /**
   **/
  public DomainNameserverPutRequest nameserver(List<String> nameserver) {
    this.nameserver = nameserver;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("nameserver")
  @NotNull

  public List<String> getNameserver() {
    return nameserver;
  }
  public void setNameserver(List<String> nameserver) {
    this.nameserver = nameserver;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
