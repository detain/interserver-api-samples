(ns inter-server-management-api.specs.update-ticket-response-schema
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def update-ticket-response-schema-data
  {
   (ds/opt :success) boolean?
   (ds/opt :message) string?
   })

(def update-ticket-response-schema-spec
  (ds/spec
    {:name ::update-ticket-response-schema
     :spec update-ticket-response-schema-data}))
