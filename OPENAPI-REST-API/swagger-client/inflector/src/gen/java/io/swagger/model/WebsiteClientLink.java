package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * A navigation link for webhosting-related actions in the client portal.
 **/
@Schema(description = "A navigation link for webhosting-related actions in the client portal.")


public class WebsiteClientLink   {
  @JsonProperty("label")
  private String label = null;
  @JsonProperty("link")
  private String link = null;
  @JsonProperty("icon")
  private String icon = null;
  @JsonProperty("icon_text")
  private String iconText = null;
  @JsonProperty("help_text")
  private String helpText = null;
  @JsonProperty("other_attr")
  private String otherAttr = null;
  /**
   * Label for the link
   **/
  public WebsiteClientLink label(String label) {
    this.label = label;
    return this;
  }

  
  @Schema(description = "Label for the link")
  @JsonProperty("label")
  public String getLabel() {
    return label;
  }
  public void setLabel(String label) {
    this.label = label;
  }

  /**
   * Link URL
   **/
  public WebsiteClientLink link(String link) {
    this.link = link;
    return this;
  }

  
  @Schema(description = "Link URL")
  @JsonProperty("link")
  public String getLink() {
    return link;
  }
  public void setLink(String link) {
    this.link = link;
  }

  /**
   * Icon for the link
   **/
  public WebsiteClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

  
  @Schema(description = "Icon for the link")
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }
  public void setIcon(String icon) {
    this.icon = icon;
  }

  /**
   * Icon text for the link
   **/
  public WebsiteClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

  
  @Schema(description = "Icon text for the link")
  @JsonProperty("icon_text")
  public String getIconText() {
    return iconText;
  }
  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  /**
   * Help text for the link
   **/
  public WebsiteClientLink helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }

  
  @Schema(description = "Help text for the link")
  @JsonProperty("help_text")
  public String getHelpText() {
    return helpText;
  }
  public void setHelpText(String helpText) {
    this.helpText = helpText;
  }

  /**
   * Other attributes for the link
   **/
  public WebsiteClientLink otherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
    return this;
  }

  
  @Schema(description = "Other attributes for the link")
  @JsonProperty("other_attr")
  public String getOtherAttr() {
    return otherAttr;
  }
  public void setOtherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsiteClientLink websiteClientLink = (WebsiteClientLink) o;
    return Objects.equals(label, websiteClientLink.label) &&
        Objects.equals(link, websiteClientLink.link) &&
        Objects.equals(icon, websiteClientLink.icon) &&
        Objects.equals(iconText, websiteClientLink.iconText) &&
        Objects.equals(helpText, websiteClientLink.helpText) &&
        Objects.equals(otherAttr, websiteClientLink.otherAttr);
  }

  @Override
  public int hashCode() {
    return Objects.hash(label, link, icon, iconText, helpText, otherAttr);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsiteClientLink {\n");
    sb.append("    label: ").append(toIndentedString(label)).append("\n");
    sb.append("    link: ").append(toIndentedString(link)).append("\n");
    sb.append("    icon: ").append(toIndentedString(icon)).append("\n");
    sb.append("    iconText: ").append(toIndentedString(iconText)).append("\n");
    sb.append("    helpText: ").append(toIndentedString(helpText)).append("\n");
    sb.append("    otherAttr: ").append(toIndentedString(otherAttr)).append("\n");
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
