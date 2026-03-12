(ns inter-server-management-api.specs.login-submission-example
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.login-submission-example-g-recaptcha-response :refer :all]
            )
  (:import (java.io File)))


(def login-submission-example-data
  {
   (ds/req :login) string?
   (ds/req :passwd) string?
   (ds/opt :remember) string?
   (ds/opt :g-recaptcha-response) login-submission-example-g-recaptcha-response-spec
   (ds/opt :tfa) string?
   })

(def login-submission-example-spec
  (ds/spec
    {:name ::login-submission-example
     :spec login-submission-example-data}))
