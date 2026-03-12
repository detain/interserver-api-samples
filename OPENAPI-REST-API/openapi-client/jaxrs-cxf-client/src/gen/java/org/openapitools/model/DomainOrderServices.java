package org.openapitools.model;

import org.openapitools.model.DomainOrderServices10001;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Available domain service catalog entries keyed by service ID.
 */
@ApiModel(description="Available domain service catalog entries keyed by service ID.")

public class DomainOrderServices  {
  
  @ApiModelProperty(value = "")

  private DomainOrderServices10001 domainOrderServices10001;
 /**
   * Get domainOrderServices10001
   * @return domainOrderServices10001
  **/
  @JsonProperty("DomainOrderServices10001")
  public DomainOrderServices10001 getDomainOrderServices10001() {
    return domainOrderServices10001;
  }

  public void setDomainOrderServices10001(DomainOrderServices10001 domainOrderServices10001) {
    this.domainOrderServices10001 = domainOrderServices10001;
  }

  public DomainOrderServices domainOrderServices10001(DomainOrderServices10001 domainOrderServices10001) {
    this.domainOrderServices10001 = domainOrderServices10001;
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
    DomainOrderServices domainOrderServices = (DomainOrderServices) o;
    return Objects.equals(this.domainOrderServices10001, domainOrderServices.domainOrderServices10001);
  }

  @Override
  public int hashCode() {
    return Objects.hash(domainOrderServices10001);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainOrderServices {\n");
    
    sb.append("    domainOrderServices10001: ").append(toIndentedString(domainOrderServices10001)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

