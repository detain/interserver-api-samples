package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Payload for replacing the assigned nameserver list for a domain.
 */
@ApiModel(description="Payload for replacing the assigned nameserver list for a domain.")

public class DomainNameserverPutRequest  {
  
  @ApiModelProperty(required = true, value = "")

  private List<String> nameserver = new ArrayList<>();
 /**
   * Get nameserver
   * @return nameserver
  **/
  @JsonProperty("nameserver")
  public List<String> getNameserver() {
    return nameserver;
  }

  public void setNameserver(List<String> nameserver) {
    this.nameserver = nameserver;
  }

  public DomainNameserverPutRequest nameserver(List<String> nameserver) {
    this.nameserver = nameserver;
    return this;
  }

  public DomainNameserverPutRequest addNameserverItem(String nameserverItem) {
    this.nameserver.add(nameserverItem);
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
    DomainNameserverPutRequest domainNameserverPutRequest = (DomainNameserverPutRequest) o;
    return Objects.equals(this.nameserver, domainNameserverPutRequest.nameserver);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

