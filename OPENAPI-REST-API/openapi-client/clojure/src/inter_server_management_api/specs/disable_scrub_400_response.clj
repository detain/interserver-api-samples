(ns inter-server-management-api.specs.disable-scrub-400-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def disable-scrub-400-response-data
  {
   (ds/req :success) boolean?
   (ds/req :text) string?
   })

(def disable-scrub-400-response-spec
  (ds/spec
    {:name ::disable-scrub-400-response
     :spec disable-scrub-400-response-data}))
