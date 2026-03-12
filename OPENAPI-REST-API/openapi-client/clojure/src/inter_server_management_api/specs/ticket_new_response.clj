(ns inter-server-management-api.specs.ticket-new-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def ticket-new-response-data
  {
   (ds/req :text) string?
   (ds/req :success) boolean?
   (ds/opt :ticket_id) int?
   })

(def ticket-new-response-spec
  (ds/spec
    {:name ::ticket-new-response
     :spec ticket-new-response-data}))
