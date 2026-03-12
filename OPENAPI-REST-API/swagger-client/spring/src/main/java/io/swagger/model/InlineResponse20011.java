package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import org.springframework.validation.annotation.Validated;
import org.openapitools.jackson.nullable.JsonNullable;
import io.swagger.configuration.NotUndefined;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonSetter;
import com.fasterxml.jackson.annotation.Nulls;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * InlineResponse20011
 */
@Validated
@NotUndefined



public class InlineResponse20011   {
  @JsonProperty("text")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String text = null;

  @JsonProperty("url")

  @JsonInclude(JsonInclude.Include.NON_ABSENT)  // Exclude from JSON if absent
  @JsonSetter(nulls = Nulls.FAIL)    // FAIL setting if the value is null
  private String url = null;


  public InlineResponse20011 text(String text) { 

    this.text = text;
    return this;
  }

  /**
   * Get text
   * @return text
   **/
  
  @Schema(description = "")
  
  public String getText() {  
    return text;
  }



  public void setText(String text) { 
    this.text = text;
  }

  public InlineResponse20011 url(String url) { 

    this.url = url;
    return this;
  }

  /**
   * A pre-signed download URL valid for 24 hours.
   * @return url
   **/
  
  @Schema(description = "A pre-signed download URL valid for 24 hours.")
  
  public String getUrl() {  
    return url;
  }



  public void setUrl(String url) { 
    this.url = url;
  }

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20011 inlineResponse20011 = (InlineResponse20011) o;
    return Objects.equals(this.text, inlineResponse20011.text) &&
        Objects.equals(this.url, inlineResponse20011.url);
  }

  @Override
  public int hashCode() {
    return Objects.hash(text, url);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20011 {\n");
    
    sb.append("    text: ").append(toIndentedString(text)).append("\n");
    sb.append("    url: ").append(toIndentedString(url)).append("\n");
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
