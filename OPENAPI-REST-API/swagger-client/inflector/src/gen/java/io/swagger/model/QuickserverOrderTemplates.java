package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.QuickserverOrderTemplatesUbuntu64;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Templates details.
 **/
@Schema(description = "Templates details.")


public class QuickserverOrderTemplates   {
  @JsonProperty("Ubuntu")
  private QuickserverOrderTemplatesUbuntu64 ubuntu = null;
  /**
   **/
  public QuickserverOrderTemplates ubuntu(QuickserverOrderTemplatesUbuntu64 ubuntu) {
    this.ubuntu = ubuntu;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("Ubuntu")
  public QuickserverOrderTemplatesUbuntu64 getUbuntu() {
    return ubuntu;
  }
  public void setUbuntu(QuickserverOrderTemplatesUbuntu64 ubuntu) {
    this.ubuntu = ubuntu;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverOrderTemplates quickserverOrderTemplates = (QuickserverOrderTemplates) o;
    return Objects.equals(ubuntu, quickserverOrderTemplates.ubuntu);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ubuntu);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverOrderTemplates {\n");
    sb.append("    ubuntu: ").append(toIndentedString(ubuntu)).append("\n");
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
