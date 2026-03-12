package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.QuickserverOrderVersionCentosstream8;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Version details.
 */
@Schema(description = "Version details.")
@Validated
@Introspected

public class QuickserverOrderVersion   {
  @JsonProperty("centosstream-8")
  private QuickserverOrderVersionCentosstream8 centosstream8 = null;

  public QuickserverOrderVersion centosstream8(QuickserverOrderVersionCentosstream8 centosstream8) {
    this.centosstream8 = centosstream8;
    return this;
  }

  /**
   * Get centosstream8
   * @return centosstream8
  **/
  @Schema(description = "")
  @NotNull

  @Valid
  public QuickserverOrderVersionCentosstream8 getCentosstream8() {
    return centosstream8;
  }

  public void setCentosstream8(QuickserverOrderVersionCentosstream8 centosstream8) {
    this.centosstream8 = centosstream8;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverOrderVersion quickserverOrderVersion = (QuickserverOrderVersion) o;
    return Objects.equals(this.centosstream8, quickserverOrderVersion.centosstream8);
  }

  @Override
  public int hashCode() {
    return Objects.hash(centosstream8);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverOrderVersion {\n");
    
    sb.append("    centosstream8: ").append(toIndentedString(centosstream8)).append("\n");
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
