(ns inter-server-management-api.specs.ticket-details
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def ticket-details-data
  {
   (ds/opt :ticketid) int?
   (ds/opt :ticketmaskid) string?
   (ds/opt :department) string?
   (ds/opt :status) string?
   (ds/opt :priority) string?
   (ds/opt :subject) string?
   (ds/opt :created_on) string?
   (ds/opt :updated_on) string?
   })

(def ticket-details-spec
  (ds/spec
    {:name ::ticket-details
     :spec ticket-details-data}))
