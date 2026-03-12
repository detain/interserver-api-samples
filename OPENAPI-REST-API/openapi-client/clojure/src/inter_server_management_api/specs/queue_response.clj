(ns inter-server-management-api.specs.queue-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def queue-response-data
  {
   (ds/req :text) string?
   (ds/req :queueId) int?
   })

(def queue-response-spec
  (ds/spec
    {:name ::queue-response
     :spec queue-response-data}))
