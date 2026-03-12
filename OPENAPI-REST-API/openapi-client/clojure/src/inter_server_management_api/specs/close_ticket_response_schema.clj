(ns inter-server-management-api.specs.close-ticket-response-schema
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def close-ticket-response-schema-data
  {
   (ds/opt :success) boolean?
   (ds/opt :text) string?
   })

(def close-ticket-response-schema-spec
  (ds/spec
    {:name ::close-ticket-response-schema
     :spec close-ticket-response-schema-data}))
