package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A navigation link for mail service actions in the client portal.
 */
@ApiModel(description="A navigation link for mail service actions in the client portal.")

public class MailClientLink  {
  
 /**
  * The label of the client link.
  */
  @ApiModelProperty(example = "Invoices", value = "The label of the client link.")

  private String label;

 /**
  * The link URL of the client link.
  */
  @ApiModelProperty(example = "invoices", value = "The link URL of the client link.")

  private String link;

 /**
  * The icon class of the client link.
  */
  @ApiModelProperty(example = "fas fa-file-invoice-dollar fa-w-12", value = "The icon class of the client link.")

  private String icon;

 /**
  * The text for the icon of the client link.
  */
  @ApiModelProperty(example = "", value = "The text for the icon of the client link.")

  private String iconText;

 /**
  * Help text for the client link.
  */
  @ApiModelProperty(example = "Invoice History", value = "Help text for the client link.")

  private String helpText;

 /**
  * Additional attributes for the client link.
  */
  @ApiModelProperty(example = "", value = "Additional attributes for the client link.")

  private String otherAttr;
 /**
   * The label of the client link.
   * @return label
  **/
  @JsonProperty("label")
  public String getLabel() {
    return label;
  }

  public void setLabel(String label) {
    this.label = label;
  }

  public MailClientLink label(String label) {
    this.label = label;
    return this;
  }

 /**
   * The link URL of the client link.
   * @return link
  **/
  @JsonProperty("link")
  public String getLink() {
    return link;
  }

  public void setLink(String link) {
    this.link = link;
  }

  public MailClientLink link(String link) {
    this.link = link;
    return this;
  }

 /**
   * The icon class of the client link.
   * @return icon
  **/
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public MailClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * The text for the icon of the client link.
   * @return iconText
  **/
  @JsonProperty("icon_text")
  public String getIconText() {
    return iconText;
  }

  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  public MailClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

 /**
   * Help text for the client link.
   * @return helpText
  **/
  @JsonProperty("help_text")
  public String getHelpText() {
    return helpText;
  }

  public void setHelpText(String helpText) {
    this.helpText = helpText;
  }

  public MailClientLink helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }

 /**
   * Additional attributes for the client link.
   * @return otherAttr
  **/
  @JsonProperty("other_attr")
  public String getOtherAttr() {
    return otherAttr;
  }

  public void setOtherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
  }

  public MailClientLink otherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
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
    MailClientLink mailClientLink = (MailClientLink) o;
    return Objects.equals(this.label, mailClientLink.label) &&
        Objects.equals(this.link, mailClientLink.link) &&
        Objects.equals(this.icon, mailClientLink.icon) &&
        Objects.equals(this.iconText, mailClientLink.iconText) &&
        Objects.equals(this.helpText, mailClientLink.helpText) &&
        Objects.equals(this.otherAttr, mailClientLink.otherAttr);
  }

  @Override
  public int hashCode() {
    return Objects.hash(label, link, icon, iconText, helpText, otherAttr);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailClientLink {\n");
    
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

