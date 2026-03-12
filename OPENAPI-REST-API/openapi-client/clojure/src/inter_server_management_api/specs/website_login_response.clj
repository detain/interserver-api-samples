(ns inter-server-management-api.specs.website-login-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def website-login-response-data
  {
   (ds/opt :type) string?
   (ds/opt :location) string?
   })

(def website-login-response-spec
  (ds/spec
    {:name ::website-login-response
     :spec website-login-response-data}))
