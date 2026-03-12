(ns inter-server-management-api.specs.view-ticket-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.ticket-details :refer :all]
            [inter-server-management-api.specs.ticket-custom-field-details :refer :all]
            [inter-server-management-api.specs.ticket-post-details :refer :all]
            )
  (:import (java.io File)))


(def view-ticket-response-data
  {
   (ds/req :success) boolean?
   (ds/req :ticket) ticket-details-spec
   (ds/opt :ticket_custom_fields) ticket-custom-field-details-spec
   (ds/opt :ticket_posts) ticket-post-details-spec
   })

(def view-ticket-response-spec
  (ds/spec
    {:name ::view-ticket-response
     :spec view-ticket-response-data}))
