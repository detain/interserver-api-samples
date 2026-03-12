package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
/**
 * Payload for replacing the assigned nameserver list for a domain.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Payload for replacing the assigned nameserver list for a domain.")

public class DomainNameserverPutRequest   {
  private List<String> nameserver = new ArrayList<String>();

  /**
   **/
  public DomainNameserverPutRequest nameserver(List<String> nameserver) {
    this.nameserver = nameserver;
    return this;
  }

  
  
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
