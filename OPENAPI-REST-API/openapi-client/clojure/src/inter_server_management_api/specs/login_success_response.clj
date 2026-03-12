(ns inter-server-management-api.specs.login-success-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def login-success-response-data
  {
   (ds/opt :sessionId) string?
   (ds/opt :account_id) int?
   (ds/opt :account_lid) string?
   (ds/opt :ima) string?
   (ds/opt :gravatar) string?
   })

(def login-success-response-spec
  (ds/spec
    {:name ::login-success-response
     :spec login-success-response-data}))
